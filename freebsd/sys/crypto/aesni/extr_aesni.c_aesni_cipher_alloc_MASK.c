
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cryptop {int crp_buf; int crp_flags; } ;
struct cryptodesc {int crd_len; int crd_skip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int * FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static uint8_t *
FUNC_3(struct cryptodesc *VAR_2, struct cryptop *VAR_3,
    bool *VAR_4)
{
 uint8_t *VAR_5;

 VAR_5 = FUNC_0(VAR_3->crp_flags,
     VAR_3->crp_buf, VAR_2->crd_skip, VAR_2->crd_len);
 if (VAR_5 != ((void*)0)) {
  *VAR_4 = 0;
  return (VAR_5);
 }
 VAR_5 = FUNC_2(VAR_2->crd_len, VAR_0, VAR_1);
 if (VAR_5 != ((void*)0)) {
  *VAR_4 = 1;
  FUNC_1(VAR_3->crp_flags, VAR_3->crp_buf, VAR_2->crd_skip,
      VAR_2->crd_len, VAR_5);
 } else
  *VAR_4 = 0;
 return (VAR_5);
}
