
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union ccb {int csio; int ataio; } ;
typedef int uint8_t ;
struct enc_fsm_state {int timeout; int buf_size; int page_code; } ;
struct TYPE_3__ {scalar_t__ enc_type; } ;
typedef TYPE_1__ enc_softc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int *,int ,int,int ,int *,int ,int ,int ) ;
 int FUNC_1 (int *,int,int *,int ,int,int ,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(enc_softc_t *VAR_3, struct enc_fsm_state *VAR_4,
         union ccb *VAR_5, uint8_t *VAR_6)
{

 if (VAR_3->enc_type == VAR_0) {
  FUNC_1(&VAR_5->ataio, 5,
     ((void*)0), VAR_1, 1,
     VAR_4->page_code, VAR_6, VAR_4->buf_size,
     VAR_4->timeout);
 } else {
  FUNC_0(&VAR_5->csio, 5,
     ((void*)0), VAR_1, 1,
     VAR_4->page_code, VAR_6, VAR_4->buf_size,
     VAR_2, VAR_4->timeout);
 }
 return (0);
}
