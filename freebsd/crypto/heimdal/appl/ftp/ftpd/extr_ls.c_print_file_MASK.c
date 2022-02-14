
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileinfo {int link; int * filename; int date; int size; int * minor; int * major; int group; int user; int n_link; int mode; int bsize; int inode; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_2,
    int VAR_3,
    struct fileinfo *VAR_4,
    int VAR_5,
    int VAR_6,
    int VAR_7,
    int VAR_8,
    int VAR_9,
    int VAR_10,
    int VAR_11,
    int VAR_12,
    int VAR_13)
{
    if(VAR_4->filename == ((void*)0))
 return;

    if(VAR_3 & VAR_0) {
 FUNC_0(VAR_2, "%*d", VAR_5, VAR_4->inode);
 FUNC_0(VAR_2, "  ");
    }
    if(VAR_3 & VAR_1) {
 FUNC_0(VAR_2, "%*d", VAR_6, VAR_4->bsize);
 FUNC_0(VAR_2, "  ");
    }
    FUNC_0(VAR_2, "%s", VAR_4->mode);
    FUNC_0(VAR_2, "  ");
    FUNC_0(VAR_2, "%*d", VAR_7, VAR_4->n_link);
    FUNC_0(VAR_2, " ");
    FUNC_0(VAR_2, "%-*s", VAR_8, VAR_4->user);
    FUNC_0(VAR_2, "  ");
    FUNC_0(VAR_2, "%-*s", VAR_9, VAR_4->group);
    FUNC_0(VAR_2, "  ");
    if(VAR_4->major != ((void*)0) && VAR_4->minor != ((void*)0))
 FUNC_0(VAR_2, "%*s, %*s", VAR_11, VAR_4->major, VAR_12, VAR_4->minor);
    else
 FUNC_0(VAR_2, "%*s", VAR_10, VAR_4->size);
    FUNC_0(VAR_2, " ");
    FUNC_0(VAR_2, "%*s", VAR_13, VAR_4->date);
    FUNC_0(VAR_2, " ");
    FUNC_0(VAR_2, "%s", VAR_4->filename);
    if(VAR_4->link)
 FUNC_0(VAR_2, " -> %s", VAR_4->link);
    FUNC_0(VAR_2, "\r\n");
}
