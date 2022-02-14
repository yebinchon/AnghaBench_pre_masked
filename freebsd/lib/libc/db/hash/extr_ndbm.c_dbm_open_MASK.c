
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int path ;
typedef int mode_t ;
struct TYPE_3__ {int bsize; int ffactor; int nelem; scalar_t__ lorder; int * hash; scalar_t__ cachesize; } ;
typedef TYPE_1__ HASHINFO ;
typedef int DBM ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int,int ,TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

extern DBM *
FUNC_4(const char *VAR_4, int VAR_5, mode_t VAR_6)
{
 HASHINFO VAR_7;
 char VAR_8[VAR_2];

 VAR_7.bsize = 4096;
 VAR_7.ffactor = 40;
 VAR_7.nelem = 1;
 VAR_7.cachesize = 0;
 VAR_7.hash = ((void*)0);
 VAR_7.lorder = 0;

 if( FUNC_3(VAR_4) >= sizeof(VAR_8) - FUNC_3(VAR_0)) {
  VAR_3 = VAR_1;
  return(((void*)0));
 }
 (void)FUNC_2(VAR_8, VAR_4);
 (void)FUNC_1(VAR_8, VAR_0);
 return ((DBM *)FUNC_0(VAR_8, VAR_5, VAR_6, &VAR_7, 0));
}
