
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct peer {int hmode; int cast_flags; struct peer* adr_link; int srcadr; } ;
typedef int sockaddr_u ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 size_t FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 struct peer** VAR_1 ;
 char* FUNC_4 (int *) ;

__attribute__((used)) static
struct peer *
FUNC_5(
 sockaddr_u * VAR_2,
 struct peer * VAR_3,
 int VAR_4,
 u_char VAR_5,
 int * VAR_6
 )
{
 struct peer *VAR_7;

 FUNC_1(2, ("findexistingpeer_addr(%s, %s, %d, 0x%x, %p)\n",
  FUNC_4(VAR_2),
  (VAR_3)
      ? FUNC_4(&VAR_3->srcadr)
      : "NULL",
  VAR_4, (u_int)VAR_5, VAR_6));
 if (((void*)0) == VAR_3)
  VAR_7 = VAR_1[FUNC_2(VAR_2)];
 else
  VAR_7 = VAR_3->adr_link;

 while (VAR_7 != ((void*)0)) {
  FUNC_1(3, ("%s %s %d %d 0x%x 0x%x ", FUNC_4(VAR_2),
   FUNC_4(&VAR_7->srcadr), VAR_4, VAR_7->hmode,
   (u_int)VAR_5, (u_int)VAR_7->cast_flags));
  if (VAR_6) {
   if (FUNC_3(VAR_2, &VAR_7->srcadr)) {
    (*VAR_6)++;
   }
  }
   if ((-1 == VAR_4 || VAR_7->hmode == VAR_4 ||
       ((VAR_0 & VAR_7->cast_flags) &&
        (VAR_0 & VAR_5))) &&
      FUNC_0(VAR_2, &VAR_7->srcadr)) {
   FUNC_1(3, ("found.\n"));
   break;
  }
  FUNC_1(3, ("\n"));
  VAR_7 = VAR_7->adr_link;
 }

 return VAR_7;
}
