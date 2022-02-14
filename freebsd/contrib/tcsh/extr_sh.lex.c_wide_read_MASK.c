
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int off_t ;
typedef int cbuf ;
typedef unsigned char Char ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (unsigned char*,char*,size_t) ;
 int FUNC_5 () ;
 size_t FUNC_6 (int,char*,size_t) ;

ssize_t
FUNC_7(int VAR_6, Char *VAR_7, size_t VAR_8, int VAR_9)
{
    char VAR_10[VAR_0 + 1];
    ssize_t VAR_11, VAR_12 = 0;
    size_t VAR_13;
    int VAR_14;

    if (VAR_8 == 0)
 return 0;
    FUNC_1 (VAR_8 <= sizeof(VAR_10) / sizeof(*VAR_10));
    FUNC_0(VAR_9);
    VAR_11 = 0;
    VAR_13 = 0;
    do {
 size_t VAR_15;
 size_t VAR_16 = VAR_8 > VAR_13 ? VAR_8 - VAR_13 : 1;

 if (VAR_13 + VAR_16 >= sizeof(VAR_10) / sizeof(*VAR_10))
     break;

 VAR_12 = FUNC_6(VAR_6, VAR_10 + VAR_13, VAR_16);

 if (VAR_13 == 0 && VAR_12 <= 0)
     break;
 VAR_13 += VAR_12;
 VAR_15 = 0;
 while (VAR_15 < VAR_13 && VAR_8 != 0) {
     int VAR_17;

     VAR_17 = FUNC_4(VAR_7 + VAR_11, VAR_10 + VAR_15, VAR_13 - VAR_15);
     if (VAR_17 == -1) {
         FUNC_5();
  if ((VAR_13 - VAR_15) < VAR_3 && VAR_12 > 0)


      break;
  VAR_7[VAR_11] = (unsigned char)VAR_10[VAR_15] | VAR_1;
     }
     if (VAR_17 <= 0)
  VAR_17 = 1;




     VAR_15 += VAR_17;
     VAR_11++;
     VAR_8--;
 }
 if (VAR_15 != VAR_13)
     FUNC_3(VAR_10, VAR_10 + VAR_15, VAR_13 - VAR_15);
 VAR_13 -= VAR_15;
    } while (VAR_13 != 0 && VAR_8 > 0);


    VAR_14 = VAR_4;
    FUNC_2(VAR_6, -(off_t)VAR_13, VAR_2);
    VAR_4 = VAR_14;
    return VAR_11 != 0 ? VAR_11 : VAR_12;
}
