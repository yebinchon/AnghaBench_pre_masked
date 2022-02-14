
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct peer {int cast_flags; } ;
typedef int sockaddr_u ;
struct TYPE_8__ {int flags; int sin; } ;
typedef TYPE_1__ endpt ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (int *) ;

endpt *
FUNC_6(
 struct peer * VAR_7,
 sockaddr_u * VAR_8,
 endpt * VAR_9
 )
{
 endpt *VAR_10;

 endpt *VAR_11;

 VAR_11 = FUNC_0(VAR_8);
 if (FUNC_2(VAR_8)) {
  VAR_10 = VAR_6;
 } else if (VAR_7->cast_flags &
     (VAR_3 | VAR_1 | VAR_4 | VAR_2)) {
  VAR_10 = FUNC_3(VAR_8);
  if (VAR_10 != ((void*)0))
   FUNC_1(4, ("Found *-cast interface %s for address %s\n",
    FUNC_5(&VAR_10->sin), FUNC_5(VAR_8)));
  else
   FUNC_1(4, ("No *-cast local address found for address %s\n",
    FUNC_5(VAR_8)));
 } else {
  VAR_10 = VAR_9;
  if (((void*)0) == VAR_10)
   VAR_10 = VAR_11;
 }






 if (VAR_11 == VAR_10)
  VAR_10 = FUNC_4(VAR_8);





 if (VAR_10 != ((void*)0) && VAR_0 & VAR_10->flags)
  if (!VAR_5)
   VAR_10 = ((void*)0);




 return VAR_10;
}
