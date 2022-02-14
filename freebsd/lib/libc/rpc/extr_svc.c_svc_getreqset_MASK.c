
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* fds_bits; } ;
typedef TYPE_1__ fd_set ;
typedef unsigned long fd_mask ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;

void
FUNC_3(fd_set *VAR_2)
{
 int VAR_3, VAR_4;
 fd_mask VAR_5, *VAR_6;
 int VAR_7;

 FUNC_0(VAR_2 != ((void*)0));

 VAR_6 = VAR_2->fds_bits;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7 += VAR_1) {
     for (VAR_5 = *VAR_6++; (VAR_3 = FUNC_1(VAR_5)) != 0;
  VAR_5 ^= (1ul << (VAR_3 - 1))) {

  VAR_4 = VAR_7 + VAR_3 - 1;
  FUNC_2(VAR_4);
     }
 }
}
