
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fill_search_info_args {scalar_t__ request; char* strspace; struct dl_serpath* serpath; int flags; TYPE_1__* serinfo; } ;
struct dl_serpath {char* dls_name; int dls_flags; } ;
struct TYPE_2__ {int dls_size; int dls_cnt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,size_t) ;

__attribute__((used)) static void *
FUNC_1(const char *VAR_1, size_t VAR_2, void *VAR_3)
{
    struct fill_search_info_args *VAR_4;

    VAR_4 = VAR_3;

    if (VAR_4->request == VAR_0) {
 VAR_4->serinfo->dls_cnt ++;
 VAR_4->serinfo->dls_size += sizeof(struct dl_serpath) + VAR_2 + 1;
    } else {
 struct dl_serpath *VAR_5;

 VAR_5 = VAR_4->serpath;
 VAR_5->dls_name = VAR_4->strspace;
 VAR_5->dls_flags = VAR_4->flags;

 FUNC_0(VAR_4->strspace, VAR_1, VAR_2);
 VAR_4->strspace[VAR_2] = '\0';

 VAR_4->strspace += VAR_2 + 1;
 VAR_4->serpath++;
    }

    return (((void*)0));
}
