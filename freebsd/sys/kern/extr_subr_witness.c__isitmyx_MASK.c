
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct witness {int w_index; char* w_name; } ;


 unsigned char FUNC_0 (unsigned char) ;
 unsigned char FUNC_1 (unsigned char) ;
 int FUNC_2 (int) ;
 unsigned char VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int VAR_1 ;
 unsigned char** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(struct witness *VAR_4, struct witness *VAR_5, int VAR_6, const char *VAR_7)
{
 unsigned char VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = VAR_4->w_index;
 VAR_11 = VAR_5->w_index;
 FUNC_2(VAR_10);
 FUNC_2(VAR_11);
 VAR_8 = VAR_2[VAR_10][VAR_11] & VAR_0;
 VAR_9 = VAR_2[VAR_11][VAR_10] & VAR_0;


 if (!((FUNC_0(VAR_8) == VAR_9 && FUNC_1(VAR_9) == VAR_8) ||
     (FUNC_1(VAR_8) == VAR_9 && FUNC_0(VAR_9) == VAR_8))) {

  if (!FUNC_4(&VAR_1))
   return (0);
  FUNC_5("%s: rmatrix mismatch between %s (index %d) and %s "
      "(index %d): w_rmatrix[%d][%d] == %hhx but "
      "w_rmatrix[%d][%d] == %hhx\n",
      VAR_7, VAR_4->w_name, VAR_10, VAR_5->w_name, VAR_11, VAR_10, VAR_11, VAR_8,
      VAR_11, VAR_10, VAR_9);
  FUNC_3();
  FUNC_5("Witness disabled.\n");
  VAR_3 = -1;
 }
 return (VAR_8 & VAR_6);
}
