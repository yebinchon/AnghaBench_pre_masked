
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int dummy; } ;
struct vtblk_request {int dummy; } ;


 struct vtblk_request* FUNC_0 (struct vtblk_softc*) ;
 struct vtblk_request* FUNC_1 (struct vtblk_softc*) ;

__attribute__((used)) static struct vtblk_request *
FUNC_2(struct vtblk_softc *VAR_0)
{
 struct vtblk_request *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 != ((void*)0))
  return (VAR_1);

 return (FUNC_0(VAR_0));
}
