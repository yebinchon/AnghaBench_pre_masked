
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (char const*,int *,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (unsigned char const**,int*) ;

__attribute__((used)) static int
FUNC_4(const unsigned char *VAR_2)
{
 const unsigned char *VAR_3, *VAR_4;
 int VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = 0;

 VAR_3 = VAR_2;
 FUNC_3(&VAR_3, &VAR_5);
 FUNC_3(&VAR_3, &VAR_5);

 VAR_4 = VAR_3;
 FUNC_3(&VAR_3, &VAR_6);
 FUNC_3(&VAR_3, &VAR_7);
 while (VAR_6 && VAR_7) {
  int VAR_9, VAR_10;
  const char *VAR_11;
  int VAR_12, VAR_13;

  VAR_13 = 0;

  FUNC_3(&VAR_3, &VAR_9);
  VAR_11 = (const char*) VAR_3;
  VAR_3 += FUNC_2(VAR_9, 4);
  FUNC_3(&VAR_3, &VAR_10);

  for (VAR_12 = 0; VAR_1[VAR_12] != ((void*)0); VAR_12++) {
   if (!FUNC_0(VAR_11, VAR_1[VAR_12], VAR_9)) {
    VAR_13 = 1;
    break;
   }
  }

  if (!VAR_13) {
   FUNC_1("ZFS: unsupported feature: %s\n", VAR_11);
   VAR_8 = VAR_0;
  }

  VAR_3 = VAR_4 + VAR_6;

  VAR_4 = VAR_3;
  FUNC_3(&VAR_3, &VAR_6);
  FUNC_3(&VAR_3, &VAR_7);
 }

 return (VAR_8);
}
