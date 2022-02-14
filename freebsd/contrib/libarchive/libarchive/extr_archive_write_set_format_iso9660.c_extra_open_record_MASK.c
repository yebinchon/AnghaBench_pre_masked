
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isoent {int dummy; } ;
struct ctl_extr_rec {unsigned char* bp; int cur_len; int dr_len; int limit; int * ce_ptr; struct isoent* isoent; scalar_t__ use_extr; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned char *
FUNC_0(unsigned char *VAR_1, int VAR_2, struct isoent *VAR_3,
    struct ctl_extr_rec *VAR_4)
{
 VAR_4->bp = VAR_1;
 if (VAR_1 != ((void*)0))
  VAR_1 += VAR_2;
 VAR_4->use_extr = 0;
 VAR_4->isoent = VAR_3;
 VAR_4->ce_ptr = ((void*)0);
 VAR_4->cur_len = VAR_4->dr_len = VAR_2;
 VAR_4->limit = VAR_0;

 return (VAR_1);
}
