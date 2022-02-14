
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct nfscllayout {int nfsly_flayrw; int nfsly_flayread; } ;
struct nfsclflayout {scalar_t__ nfsfl_off; scalar_t__ nfsfl_end; } ;


 int VAR_0 ;
 struct nfsclflayout* FUNC_0 (int *) ;
 struct nfsclflayout* FUNC_1 (struct nfsclflayout*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int
FUNC_2(struct nfscllayout *VAR_4, uint64_t VAR_5, uint32_t VAR_6,
    struct nfsclflayout **VAR_7)
{
 struct nfsclflayout *VAR_8, *VAR_9, *VAR_10;
 uint32_t VAR_11;

 VAR_10 = ((void*)0);
 VAR_11 = VAR_6;

 do {
  if (VAR_11 == VAR_1)
   VAR_8 = FUNC_0(&VAR_4->nfsly_flayread);
  else
   VAR_8 = FUNC_0(&VAR_4->nfsly_flayrw);
  while (VAR_8 != ((void*)0)) {
   VAR_9 = FUNC_1(VAR_8, VAR_3);
   if (VAR_8->nfsfl_off > VAR_5)
    break;
   if (VAR_8->nfsfl_end > VAR_5 &&
       (VAR_10 == ((void*)0) || VAR_10->nfsfl_end < VAR_8->nfsfl_end))
    VAR_10 = VAR_8;
   VAR_8 = VAR_9;
  }
  if (VAR_11 == VAR_1)
   VAR_11 = VAR_2;
  else
   VAR_11 = 0;
 } while (VAR_11 != 0);
 if (VAR_10 != ((void*)0)) {

  *VAR_7 = VAR_10;
  return (0);
 }
 return (VAR_0);
}
