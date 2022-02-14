
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct safe_session {void** ses_hmouter; void** ses_hminner; } ;
typedef int* caddr_t ;
struct TYPE_10__ {int state; } ;
struct TYPE_8__ {int b32; } ;
struct TYPE_9__ {TYPE_1__ h; } ;
typedef TYPE_2__ SHA1_CTX ;
typedef TYPE_3__ MD5_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int*,int) ;
 int VAR_3 ;
 int FUNC_2 (void**) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int*,int) ;
 int VAR_4 ;
 int FUNC_5 (int ,void**,int) ;
 int* VAR_5 ;
 int* VAR_6 ;
 void* FUNC_6 (void*) ;

__attribute__((used)) static void
FUNC_7(struct safe_session *VAR_7, int VAR_8, caddr_t VAR_9, int VAR_10)
{
 MD5_CTX VAR_11;
 SHA1_CTX VAR_12;
 int VAR_13;


 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
  VAR_9[VAR_13] ^= VAR_1;

 if (VAR_8 == VAR_0) {
  FUNC_0(&VAR_11);
  FUNC_1(&VAR_11, VAR_9, VAR_10);
  FUNC_1(&VAR_11, VAR_5, VAR_3 - VAR_10);
  FUNC_5(VAR_11.state, VAR_7->ses_hminner, sizeof(VAR_11.state));
 } else {
  FUNC_3(&VAR_12);
  FUNC_4(&VAR_12, VAR_9, VAR_10);
  FUNC_4(&VAR_12, VAR_5,
      VAR_4 - VAR_10);
  FUNC_5(VAR_12.h.b32, VAR_7->ses_hminner, sizeof(VAR_12.h.b32));
 }

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
  VAR_9[VAR_13] ^= (VAR_1 ^ VAR_2);

 if (VAR_8 == VAR_0) {
  FUNC_0(&VAR_11);
  FUNC_1(&VAR_11, VAR_9, VAR_10);
  FUNC_1(&VAR_11, VAR_6, VAR_3 - VAR_10);
  FUNC_5(VAR_11.state, VAR_7->ses_hmouter, sizeof(VAR_11.state));
 } else {
  FUNC_3(&VAR_12);
  FUNC_4(&VAR_12, VAR_9, VAR_10);
  FUNC_4(&VAR_12, VAR_6,
      VAR_4 - VAR_10);
  FUNC_5(VAR_12.h.b32, VAR_7->ses_hmouter, sizeof(VAR_12.h.b32));
 }

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
  VAR_9[VAR_13] ^= VAR_2;


 for (VAR_13 = 0; VAR_13 < FUNC_2(VAR_7->ses_hminner); VAR_13++) {
  VAR_7->ses_hminner[VAR_13] = FUNC_6(VAR_7->ses_hminner[VAR_13]);
  VAR_7->ses_hmouter[VAR_13] = FUNC_6(VAR_7->ses_hmouter[VAR_13]);
 }
}
