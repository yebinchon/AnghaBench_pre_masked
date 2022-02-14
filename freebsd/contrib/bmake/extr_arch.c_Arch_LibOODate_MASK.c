
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ar_hdr {int AR_DATE; } ;
struct TYPE_5__ {int type; scalar_t__ mtime; TYPE_1__* cmgn; int path; int children; } ;
struct TYPE_4__ {scalar_t__ mtime; } ;
typedef TYPE_2__ GNode ;
typedef int Boolean ;


 int VAR_0 ;
 struct ar_hdr* FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int VAR_6 ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (int ,int *,int) ;

Boolean
FUNC_8(GNode *VAR_8)
{
    Boolean VAR_9;

    if (VAR_8->type & VAR_3) {
 VAR_9 = VAR_5;
    } else if (FUNC_3(VAR_8->type) && FUNC_2(VAR_8->children)) {
 VAR_9 = VAR_1;
    } else if ((!FUNC_2(VAR_8->children) && VAR_8->cmgn == ((void*)0)) ||
        (VAR_8->mtime > VAR_7) ||
        (VAR_8->cmgn != ((void*)0) && VAR_8->mtime < VAR_8->cmgn->mtime)) {
 VAR_9 = VAR_5;
    } else {
 VAR_9 = VAR_1;

    }
    return (VAR_9);
}
