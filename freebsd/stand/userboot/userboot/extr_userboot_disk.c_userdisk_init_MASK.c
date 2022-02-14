
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int ;
typedef void* off_t ;
struct TYPE_3__ {int * ud_bcache; scalar_t__ ud_open; void* sectorsize; void* mediasize; } ;


 scalar_t__ FUNC_0 (int ,int,int ,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_3(void)
{
 off_t VAR_8;
 u_int VAR_9;
 int VAR_10;

 VAR_7 = VAR_6;
 if (VAR_7 > 0) {
  VAR_5 = FUNC_2(sizeof(*VAR_5) * VAR_7);
  if (VAR_5 == ((void*)0))
   return (VAR_2);
  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
   if (FUNC_0(VAR_4, VAR_10, VAR_1,
       &VAR_9) != 0 || FUNC_0(VAR_4, VAR_10,
       VAR_0, &VAR_8) != 0)
    return (VAR_3);
   VAR_5[VAR_10].mediasize = VAR_8;
   VAR_5[VAR_10].sectorsize = VAR_9;
   VAR_5[VAR_10].ud_open = 0;
   VAR_5[VAR_10].ud_bcache = ((void*)0);
  }
 }
 FUNC_1(VAR_7);
 return(0);
}
