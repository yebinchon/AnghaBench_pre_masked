
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


union ccb {int csio; int ataio; } ;
typedef int uint8_t ;
struct ses_control_page_hdr {int control_flags; } ;
struct ses_comstat {int dummy; } ;
struct enc_fsm_state {int timeout; } ;
struct TYPE_15__ {int ses_pending_requests; int ses_requests; } ;
typedef TYPE_1__ ses_softc_t ;
struct TYPE_16__ {scalar_t__ result; } ;
typedef TYPE_2__ ses_control_request_t ;
struct TYPE_17__ {TYPE_10__* status_page; } ;
typedef TYPE_3__ ses_cache_t ;
struct TYPE_19__ {TYPE_3__* private; } ;
struct TYPE_18__ {scalar_t__ enc_type; TYPE_5__ enc_daemon_cache; TYPE_1__* enc_private; } ;
typedef TYPE_4__ enc_softc_t ;
typedef TYPE_5__ enc_cache_t ;
struct TYPE_14__ {int hdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int VAR_7 ;
 int FUNC_4 (int *,TYPE_10__*,size_t) ;
 int FUNC_5 (int *,int,int *,int ,int ,int ,int ,int,int ,int *,size_t,int ,int ) ;
 int FUNC_6 (int *,int,int *,int ,int *,size_t,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int *,size_t,TYPE_2__*) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_11(enc_softc_t *VAR_8, struct enc_fsm_state *VAR_9,
    union ccb *VAR_10, uint8_t *VAR_11)
{
 ses_softc_t *VAR_12;
 enc_cache_t *VAR_13;
 ses_cache_t *VAR_14;
 struct ses_control_page_hdr *VAR_15;
 ses_control_request_t *VAR_16;
 size_t VAR_17;
 size_t VAR_18;

 VAR_12 = VAR_8->enc_private;
 VAR_13 = &VAR_8->enc_daemon_cache;
 VAR_14 = VAR_13->private;
 VAR_15 = (struct ses_control_page_hdr *)VAR_11;

 if (VAR_14->status_page == ((void*)0)) {
  FUNC_9(&VAR_12->ses_requests, VAR_0);
  return (VAR_0);
 }

 VAR_17 = FUNC_8(&VAR_14->status_page->hdr);
 FUNC_4(VAR_11, VAR_14->status_page, VAR_17);


 VAR_18 = sizeof(struct ses_control_page_hdr);
 for (VAR_18 = sizeof(struct ses_control_page_hdr);
      VAR_18 < VAR_17; VAR_18 += sizeof(struct ses_comstat)) {
  VAR_11[VAR_18] &= ~VAR_4;
 }


 VAR_15->control_flags &= ~VAR_5;


 while ((VAR_16 = FUNC_1(&VAR_12->ses_requests)) != ((void*)0)) {

  FUNC_3(&VAR_12->ses_requests, VAR_16, VAR_7);
  VAR_16->result = FUNC_7(VAR_8, VAR_11, VAR_17, VAR_16);
  if (VAR_16->result != 0) {
   FUNC_10(VAR_16);
   continue;
  }
  FUNC_2(&VAR_12->ses_pending_requests, VAR_16, VAR_7);
 }

 if (FUNC_0(&VAR_12->ses_pending_requests) != 0)
  return (VAR_2);


 if (VAR_8->enc_type == VAR_1) {
  FUNC_6(&VAR_10->ataio, 5, ((void*)0),
        VAR_3,
        VAR_11, FUNC_8(&VAR_14->status_page->hdr),
        VAR_9->timeout);
 } else {
  FUNC_5(&VAR_10->csio, 5, ((void*)0),
        VAR_3, 0,
                          0, 0,
                       1, 0,
        VAR_11, FUNC_8(&VAR_14->status_page->hdr),
        VAR_6, VAR_9->timeout);
 }
 return (0);
}
