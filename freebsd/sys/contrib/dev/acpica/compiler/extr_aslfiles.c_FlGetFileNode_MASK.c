
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_6__ {struct TYPE_6__* Next; TYPE_1__* Files; } ;
struct TYPE_5__ {int Filename; } ;
typedef TYPE_2__ ASL_GLOBAL_FILE_NODE ;


 TYPE_2__* AslGbl_FilesList ;
 int strcmp (int ,char*) ;

ASL_GLOBAL_FILE_NODE *
FlGetFileNode (
    UINT32 FileId,
    char *Filename)
{
    ASL_GLOBAL_FILE_NODE *Current = AslGbl_FilesList;


    if (!Filename)
    {
        return (((void*)0));
    }

    while (Current)
    {
        if (!strcmp (Current->Files[FileId].Filename, Filename))
        {
            return (Current);
        }

        Current = Current->Next;
    }

    return (((void*)0));
}
