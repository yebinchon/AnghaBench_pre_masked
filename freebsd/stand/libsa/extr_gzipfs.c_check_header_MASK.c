
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uInt ;
struct z_file {scalar_t__ zf_dataoffset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct z_file*,scalar_t__*) ;
 int* VAR_6 ;

__attribute__((used)) static int
FUNC_1(struct z_file *VAR_7)
{
    int VAR_8;
    int VAR_9;
    uInt VAR_10;
    int VAR_11;

    VAR_7->zf_dataoffset = 0;

    for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
 VAR_11 = FUNC_0(VAR_7, &VAR_7->zf_dataoffset);
 if (VAR_11 != VAR_6[VAR_10]) {
     return(1);
 }
    }
    VAR_8 = FUNC_0(VAR_7, &VAR_7->zf_dataoffset);
    VAR_9 = FUNC_0(VAR_7, &VAR_7->zf_dataoffset);
    if (VAR_8 != VAR_5 || (VAR_9 & VAR_4) != 0) {
 return(1);
    }


    for (VAR_10 = 0; VAR_10 < 6; VAR_10++) (void)FUNC_0(VAR_7, &VAR_7->zf_dataoffset);

    if ((VAR_9 & VAR_1) != 0) {
 VAR_10 = (uInt)FUNC_0(VAR_7, &VAR_7->zf_dataoffset);
 VAR_10 += ((uInt)FUNC_0(VAR_7, &VAR_7->zf_dataoffset))<<8;

 while (VAR_10-- != 0 && FUNC_0(VAR_7, &VAR_7->zf_dataoffset) != -1) ;
    }
    if ((VAR_9 & VAR_3) != 0) {
 while ((VAR_11 = FUNC_0(VAR_7, &VAR_7->zf_dataoffset)) != 0 && VAR_11 != -1) ;
    }
    if ((VAR_9 & VAR_0) != 0) {
 while ((VAR_11 = FUNC_0(VAR_7, &VAR_7->zf_dataoffset)) != 0 && VAR_11 != -1) ;
    }
    if ((VAR_9 & VAR_2) != 0) {
 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) VAR_11 = FUNC_0(VAR_7, &VAR_7->zf_dataoffset);
    }

    return((VAR_11 == -1) ? 1 : 0);
}
