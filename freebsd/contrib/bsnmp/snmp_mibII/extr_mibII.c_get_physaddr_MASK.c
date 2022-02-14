
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_dl {scalar_t__ sdl_alen; } ;
struct mibrcvaddr {int flags; } ;
struct mibif {scalar_t__ physaddrlen; int * physaddr; int index; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 struct mibrcvaddr* FUNC_3 (int ,int *,scalar_t__) ;
 struct mibrcvaddr* FUNC_4 (struct mibif*,int *,scalar_t__) ;
 int FUNC_5 (struct mibrcvaddr*) ;
 int * FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct mibif *VAR_1, struct sockaddr_dl *VAR_2, u_char *VAR_3)
{
 u_char *VAR_4;
 struct mibrcvaddr *VAR_5;

 if (VAR_2->sdl_alen == 0) {

  if (VAR_1->physaddrlen != 0) {
   if ((VAR_5 = FUNC_3(VAR_1->index, VAR_1->physaddr,
       VAR_1->physaddrlen)) != ((void*)0))
    FUNC_5(VAR_5);
   FUNC_0(VAR_1->physaddr);
   VAR_1->physaddr = ((void*)0);
   VAR_1->physaddrlen = 0;
  }
  return;
 }

 if (VAR_1->physaddrlen != VAR_2->sdl_alen) {

  if (VAR_1->physaddrlen) {

   if ((VAR_5 = FUNC_3(VAR_1->index, VAR_1->physaddr,
       VAR_1->physaddrlen)) != ((void*)0))
    FUNC_5(VAR_5);
  }
  if ((VAR_4 = FUNC_6(VAR_1->physaddr, VAR_2->sdl_alen)) == ((void*)0)) {
   FUNC_0(VAR_1->physaddr);
   VAR_1->physaddr = ((void*)0);
   VAR_1->physaddrlen = 0;
   return;
  }
  VAR_1->physaddr = VAR_4;
  VAR_1->physaddrlen = VAR_2->sdl_alen;

 } else if (FUNC_1(VAR_1->physaddr, VAR_3, VAR_1->physaddrlen) == 0) {

  return;

 } else {



  if ((VAR_5 = FUNC_3(VAR_1->index, VAR_1->physaddr,
      VAR_1->physaddrlen)) != ((void*)0))
   FUNC_5(VAR_5);
 }

 FUNC_2(VAR_1->physaddr, VAR_3, VAR_1->physaddrlen);


 if ((VAR_5 = FUNC_4(VAR_1, VAR_1->physaddr, VAR_1->physaddrlen)) != ((void*)0))
  VAR_5->flags |= VAR_0;
}
