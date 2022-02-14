
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_extr_rec {int cur_len; int use_extr; unsigned char* bp; unsigned char* ce_ptr; int limit; int isoent; int extr_loc; int extr_off; } ;


 int VAR_0 ;
 int FUNC_0 (struct ctl_extr_rec*,int ) ;
 unsigned char* FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (struct ctl_extr_rec*) ;

__attribute__((used)) static unsigned char *
FUNC_3(struct ctl_extr_rec *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->cur_len;


 FUNC_0(VAR_1, VAR_0);


 VAR_1->use_extr = 1;
 if (VAR_1->bp != ((void*)0)) {

  unsigned char *VAR_4;



  VAR_1->ce_ptr = &VAR_1->bp[VAR_3+1];
  VAR_4 = FUNC_1(VAR_1->isoent,
      &VAR_1->limit, &VAR_1->extr_off, &VAR_1->extr_loc);
  VAR_1->bp = VAR_4 - 1;
 } else

  (void)FUNC_1(VAR_1->isoent,
      &VAR_1->limit, ((void*)0), ((void*)0));
 VAR_1->cur_len = 0;


 if (FUNC_2(VAR_1) < VAR_2)
  (void)FUNC_3(VAR_1, VAR_2);

 return (VAR_1->bp);
}
