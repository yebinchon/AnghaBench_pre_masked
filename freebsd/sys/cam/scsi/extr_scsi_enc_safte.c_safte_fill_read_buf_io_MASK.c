
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union ccb {int csio; int ataio; } ;
typedef int uint8_t ;
struct enc_fsm_state {scalar_t__ page_code; int timeout; int buf_size; } ;
struct TYPE_5__ {scalar_t__ nelms; } ;
struct TYPE_6__ {scalar_t__ enc_type; TYPE_1__ enc_cache; } ;
typedef TYPE_2__ enc_softc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *,int,int *,int ,int,scalar_t__,int ,int *,int ,int ,int ) ;
 int FUNC_2 (int *,int,int *,int ,scalar_t__,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_3(enc_softc_t *VAR_5, struct enc_fsm_state *VAR_6,
         union ccb *VAR_7, uint8_t *VAR_8)
{

 if (VAR_6->page_code != VAR_2 &&
     VAR_5->enc_cache.nelms == 0) {
  FUNC_0(VAR_5, VAR_3);
  return (-1);
 }

 if (VAR_5->enc_type == VAR_0) {
  FUNC_2(&VAR_7->ataio, 5,
    ((void*)0), VAR_1,
    VAR_6->page_code, VAR_8, VAR_6->buf_size,
    VAR_6->timeout);
 } else {
  FUNC_1(&VAR_7->csio, 5,
    ((void*)0), VAR_1, 1,
    VAR_6->page_code, 0, VAR_8, VAR_6->buf_size,
    VAR_4, VAR_6->timeout);
 }
 return (0);
}
