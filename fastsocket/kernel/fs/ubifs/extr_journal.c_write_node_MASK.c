
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_wbuf {int lnum; int offs; int used; } ;
struct ubifs_info {TYPE_1__* jheads; } ;
struct TYPE_2__ {struct ubifs_wbuf wbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ubifs_info*,void*,int,int ) ;
 int FUNC_4 (struct ubifs_wbuf*,void*,int) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_1, int VAR_2, void *VAR_3, int VAR_4,
        int *VAR_5, int *VAR_6)
{
 struct ubifs_wbuf *VAR_7 = &VAR_1->jheads[VAR_2].wbuf;

 FUNC_2(VAR_2 != VAR_0);

 *VAR_5 = VAR_1->jheads[VAR_2].wbuf.lnum;
 *VAR_6 = VAR_1->jheads[VAR_2].wbuf.offs + VAR_1->jheads[VAR_2].wbuf.used;

 FUNC_1("jhead %s, LEB %d:%d, len %d",
  FUNC_0(VAR_2), *VAR_5, *VAR_6, VAR_4);
 FUNC_3(VAR_1, VAR_3, VAR_4, 0);

 return FUNC_4(VAR_7, VAR_3, VAR_4);
}
