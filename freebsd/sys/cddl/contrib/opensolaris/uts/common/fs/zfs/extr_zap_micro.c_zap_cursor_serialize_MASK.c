
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long zc_hash; unsigned long long zc_serialized; int zc_cd; int * zc_zap; } ;
typedef TYPE_1__ zap_cursor_t ;
typedef unsigned long long uint64_t ;


 int FUNC_0 (int) ;
 unsigned long long FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

uint64_t
FUNC_3(zap_cursor_t *VAR_0)
{
 if (VAR_0->zc_hash == -1ULL)
  return (-1ULL);
 if (VAR_0->zc_zap == ((void*)0))
  return (VAR_0->zc_serialized);
 FUNC_0((VAR_0->zc_hash & FUNC_2(VAR_0->zc_zap)) == 0);
 FUNC_0(VAR_0->zc_cd < FUNC_2(VAR_0->zc_zap));
 return ((VAR_0->zc_hash >> (64 - FUNC_1(VAR_0->zc_zap))) |
     ((uint64_t)VAR_0->zc_cd << FUNC_1(VAR_0->zc_zap)));
}
