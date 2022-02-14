
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int) ;
 int* VAR_4 ;
 unsigned char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,size_t,char*,unsigned char) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_5, size_t VAR_6, int VAR_7, size_t *VAR_8)
{
    size_t VAR_9, VAR_10, VAR_11;
    const unsigned char *VAR_12 = (const unsigned char *)VAR_5;
    unsigned char *VAR_13;

    VAR_11 = VAR_6 * 3 + 1;
    VAR_13 = FUNC_1(VAR_11);
    if (VAR_13 == ((void*)0))
 return ((void*)0);

    for (VAR_9 = 0, VAR_10 = 0; VAR_9 < VAR_6; VAR_9++) {
 unsigned char VAR_14 = VAR_4[VAR_12[VAR_9]] & VAR_7;
 if (VAR_9 == 0 && (VAR_14 & VAR_2)) {
     VAR_13[VAR_10++] = '\\';
     VAR_13[VAR_10++] = VAR_12[VAR_9];
 } else if ((VAR_9 + 1) == VAR_6 && (VAR_14 & VAR_3)) {

     VAR_13[VAR_10++] = '\\';
     VAR_13[VAR_10++] = VAR_12[VAR_9];
 } else if (VAR_14 & VAR_1) {
     VAR_13[VAR_10++] = '\\';
     VAR_13[VAR_10++] = VAR_12[VAR_9];
 } else if (VAR_14 & VAR_0) {
     int VAR_15 = FUNC_2((char *)&VAR_13[VAR_10], VAR_11 - VAR_10 - 1,
        "#%02x", (unsigned char)VAR_12[VAR_9]);
     VAR_10 += VAR_15;
 } else {
     VAR_13[VAR_10++] = VAR_12[VAR_9];
 }
    }
    VAR_13[VAR_10] = '\0';
    FUNC_0(VAR_10 < VAR_11);
    *VAR_8 = VAR_10;
    return (char *)VAR_13;
}
