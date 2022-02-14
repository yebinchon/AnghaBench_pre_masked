
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct flash_slice {char* label; int flags; scalar_t__ size; scalar_t__ base; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,void**) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_6(phandle_t VAR_3, struct flash_slice *VAR_4, int *VAR_5)
{
 char *VAR_6;
 phandle_t VAR_7;
 u_long VAR_8, VAR_9;
 int VAR_10, VAR_11;
 ssize_t VAR_12;

 VAR_11 = 0;
 for (VAR_7 = FUNC_0(VAR_3); VAR_7 != 0; VAR_7 = FUNC_3(VAR_7)) {
  VAR_10 = VAR_0;


  if (FUNC_2(VAR_7, "compatible"))
   continue;

  if (VAR_11 == VAR_2) {
   FUNC_4("not enough buffer for slice i=%d\n", VAR_11);
   break;
  }


  if (FUNC_5(VAR_7, &VAR_8, &VAR_9) != 0) {
   FUNC_4("error during processing reg property, i=%d\n",
       VAR_11);
   continue;
  }

  if (VAR_9 == 0) {
   FUNC_4("slice i=%d with no size\n", VAR_11);
   continue;
  }


  VAR_12 = FUNC_1(VAR_7, "label", (void **)&VAR_6);
  if (VAR_12 <= 0) {

   VAR_12 = FUNC_1(VAR_7, "name", (void **)&VAR_6);
   if (VAR_12 <= 0) {
    FUNC_4("slice i=%d with no name\n", VAR_11);
    VAR_6 = ((void*)0);
   }
  }

  if (FUNC_2(VAR_7, "read-only"))
   VAR_10 |= VAR_1;


  VAR_4[VAR_11].base = VAR_8;
  VAR_4[VAR_11].size = VAR_9;
  VAR_4[VAR_11].label = VAR_6;
  VAR_4[VAR_11].flags = VAR_10;
  VAR_11++;
 }

 *VAR_5 = VAR_11;
 return (0);
}
