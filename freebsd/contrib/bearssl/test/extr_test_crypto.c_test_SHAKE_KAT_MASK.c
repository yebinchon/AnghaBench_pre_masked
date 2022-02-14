
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_shake_context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned char*,size_t) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (char*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,unsigned int) ;
 size_t FUNC_8 (unsigned char*,char const* const) ;
 int FUNC_9 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_10(int VAR_3, const char *const *VAR_4)
{
 size_t VAR_5;

 for (VAR_5 = 0; VAR_4[VAR_5] != ((void*)0); VAR_5 += 2) {
  unsigned char VAR_6[250], VAR_7[250], VAR_8[250];
  size_t VAR_9, VAR_10, VAR_11;
  br_shake_context VAR_12;

  VAR_9 = FUNC_8(VAR_6, VAR_4[VAR_5]);
  VAR_10 = FUNC_8(VAR_8, VAR_4[VAR_5 + 1]);
  FUNC_1(&VAR_12, VAR_3);
  FUNC_2(&VAR_12, VAR_6, VAR_9);
  FUNC_0(&VAR_12);
  FUNC_3(&VAR_12, VAR_7, VAR_10);
  FUNC_4("KAT 1", VAR_7, VAR_8, VAR_10);

  FUNC_1(&VAR_12, VAR_3);
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11 ++) {
   FUNC_2(&VAR_12, VAR_6 + VAR_11, 1);
  }
  FUNC_0(&VAR_12);
  FUNC_3(&VAR_12, VAR_7, VAR_10);
  FUNC_4("KAT 2", VAR_7, VAR_8, VAR_10);

  FUNC_1(&VAR_12, VAR_3);
  FUNC_2(&VAR_12, VAR_6, VAR_9);
  FUNC_0(&VAR_12);
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11 ++) {
   unsigned char VAR_13;

   FUNC_3(&VAR_12, &VAR_13, 1);
   if (VAR_13 != VAR_8[VAR_11]) {
    FUNC_7(VAR_1, "KAT 3 (byte %u)\n",
     (unsigned)VAR_11);
    FUNC_5(VAR_0);
   }
  }

  FUNC_9(".");
  FUNC_6(VAR_2);
 }
}
