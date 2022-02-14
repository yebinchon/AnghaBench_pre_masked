
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int cap_channel_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (void*,scalar_t__ const*,size_t) ;
 int FUNC_3 (int *,char*,void const*,size_t) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__* FUNC_7 (int *,char*,size_t*) ;
 scalar_t__ FUNC_8 (int *,char*) ;

__attribute__((used)) static int
FUNC_9(cap_channel_t *VAR_3, nvlist_t *VAR_4, void *VAR_5, size_t *VAR_6,
    const void *VAR_7, size_t VAR_8)
{
 const uint8_t *VAR_9;
 size_t VAR_10;
 int VAR_11;
 uint8_t VAR_12;

 VAR_12 = 0;
 if (VAR_6 != ((void*)0))
  VAR_12 |= VAR_0;
 if (VAR_7 != ((void*)0))
  VAR_12 |= VAR_1;
 FUNC_5(VAR_4, "operation", (uint64_t)VAR_12);
 if (VAR_5 == ((void*)0) && VAR_6 != ((void*)0))
  FUNC_4(VAR_4, "justsize");
 else if (VAR_6 != ((void*)0))
  FUNC_5(VAR_4, "oldlen", (uint64_t)*VAR_6);
 if (VAR_7 != ((void*)0))
  FUNC_3(VAR_4, "newp", VAR_7, VAR_8);

 VAR_4 = FUNC_0(VAR_3, VAR_4);
 if (VAR_4 == ((void*)0))
  return (-1);
 VAR_11 = (int)FUNC_1(VAR_4, "error", 0);
 if (VAR_11 != 0) {
  FUNC_6(VAR_4);
  VAR_2 = VAR_11;
  return (-1);
 }

 if (VAR_5 == ((void*)0) && VAR_6 != ((void*)0)) {
  *VAR_6 = (size_t)FUNC_8(VAR_4, "oldlen");
 } else if (VAR_5 != ((void*)0)) {
  VAR_9 = FUNC_7(VAR_4, "oldp", &VAR_10);
  FUNC_2(VAR_5, VAR_9, VAR_10);
  if (VAR_6 != ((void*)0))
   *VAR_6 = VAR_10;
 }

 FUNC_6(VAR_4);

 return (0);
}
