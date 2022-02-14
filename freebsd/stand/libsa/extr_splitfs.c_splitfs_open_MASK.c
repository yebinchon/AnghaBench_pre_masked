
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct split_file {int filesc; void** descsv; void** filesv; } ;
struct open_file {scalar_t__ f_flags; struct split_file* f_fsdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct split_file*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 scalar_t__ FUNC_6 (char) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;
 void* FUNC_10 (void**,int) ;
 int FUNC_11 (struct split_file*) ;
 scalar_t__ FUNC_12 (struct split_file*) ;
 int FUNC_13 (char*,char*,char const*) ;
 int FUNC_14 (char*,char*) ;
 void* FUNC_15 (char*) ;
 int FUNC_16 (char const*) ;
 char* FUNC_17 (char const*,char) ;

__attribute__((used)) static int
FUNC_18(const char *VAR_7, struct open_file *VAR_8)
{
    char *VAR_9, *VAR_10, *VAR_11;
    int VAR_12;
    struct split_file *VAR_13;
    struct stat VAR_14;


    if (VAR_8->f_flags != VAR_4)
 return(VAR_3);


    if ((VAR_11 = FUNC_17(VAR_7, '.')) && (!FUNC_14(VAR_11, ".split")))
 return(VAR_2);


    VAR_10 = FUNC_7(FUNC_16(VAR_7) + 7);
    FUNC_13(VAR_10, "%s.split", VAR_7);


    VAR_12 = FUNC_8(VAR_10, VAR_5);
    FUNC_4(VAR_10);
    if (VAR_12 == -1)
 return(VAR_2);

    if (FUNC_5(VAR_12, &VAR_14) < 0) {
 FUNC_9("splitfs_open: stat failed\n");
 FUNC_2(VAR_12);
 return(VAR_2);
    }
    if (!FUNC_0(VAR_14.st_mode)) {
 FUNC_9("splitfs_open: not a file\n");
 FUNC_2(VAR_12);
 return(VAR_1);
    }


    VAR_13 = FUNC_7(sizeof(struct split_file));
    FUNC_1(VAR_13, sizeof(struct split_file));
    VAR_9 = FUNC_7(VAR_0);
    while (FUNC_3(VAR_9, VAR_0, VAR_12) > 0) {
 VAR_11 = VAR_9;
 while ((*VAR_11 != '\0') && (FUNC_6(*VAR_11) == 0))
     VAR_11++;
 if (*VAR_11 != '\0') {
     *VAR_11 = '\0';
     VAR_11++;
 }
 while ((*VAR_11 != '\0') && (FUNC_6(*VAR_11) != 0))
     VAR_11++;
 if (*VAR_11 == '\0')
     VAR_11 = VAR_9;
 VAR_13->filesc++;
 VAR_13->filesv = FUNC_10(VAR_13->filesv, sizeof(*(VAR_13->filesv)) * VAR_13->filesc);
 VAR_13->descsv = FUNC_10(VAR_13->descsv, sizeof(*(VAR_13->descsv)) * VAR_13->filesc);
 VAR_13->filesv[VAR_13->filesc - 1] = FUNC_15(VAR_9);
 VAR_13->descsv[VAR_13->filesc - 1] = FUNC_15(VAR_11);
    }
    FUNC_4(VAR_9);
    FUNC_2(VAR_12);

    if (VAR_13->filesc == 0) {
 FUNC_11(VAR_13);
 return(VAR_2);
    }
    VAR_6 = FUNC_12(VAR_13);
    if (VAR_6 != 0) {
 FUNC_11(VAR_13);
 return(VAR_2);
    }


    VAR_8->f_fsdata = VAR_13;
    return (0);
}
