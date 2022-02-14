
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tbl_span {scalar_t__ pos; TYPE_1__* opts; } ;
struct TYPE_4__ {int sulen; int slen; int len; int * cols; } ;
struct html {int * tblt; TYPE_2__ tbl; } ;
struct TYPE_3__ {int opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct html*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_2 (struct html*,int ,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_3 (TYPE_2__*,struct tbl_span const*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct html *VAR_9, const struct tbl_span *VAR_10)
{
 FUNC_1(VAR_9);
 if (VAR_9->tbl.cols == ((void*)0)) {
  VAR_9->tbl.len = VAR_6;
  VAR_9->tbl.slen = VAR_7;
  VAR_9->tbl.sulen = VAR_8;
  FUNC_3(&VAR_9->tbl, VAR_10, 0, 0);
 }
 FUNC_0(((void*)0) == VAR_9->tblt);
 VAR_9->tblt = FUNC_2(VAR_9, VAR_0, "c?ss", "tbl",
     "border",
  VAR_10->opts->opts & VAR_1 ? "1" : ((void*)0),
     "border-style",
  VAR_10->opts->opts & VAR_3 ? "double" :
  VAR_10->opts->opts & VAR_2 ? "solid" : ((void*)0),
     "border-top-style",
  VAR_10->pos == VAR_4 ? "double" :
  VAR_10->pos == VAR_5 ? "solid" : ((void*)0));
}
