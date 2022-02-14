
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {char* procname; struct TYPE_3__* parent; } ;
typedef TYPE_1__ ctl_table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,char*,int ,int *) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(ctl_table *VAR_3, u16 VAR_4, u32 *VAR_5)
{
 int VAR_6, VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;

 VAR_7 = -VAR_0;
 VAR_8 = (char *)FUNC_0(VAR_1);
 if (!VAR_8)
  goto out;

 VAR_6 = VAR_2;
 VAR_10 = VAR_8+VAR_6;
 *--VAR_10 = '\0';
 VAR_6--;
 VAR_9 = VAR_10-1;
 *VAR_9 = '/';
 while (VAR_3) {
  const char *VAR_11 = VAR_3->procname;
  size_t VAR_12 = FUNC_4(VAR_11);
  VAR_6 -= VAR_12 + 1;
  if (VAR_6 < 0)
   goto out_free;
  VAR_10 -= VAR_12;
  FUNC_2(VAR_10, VAR_11, VAR_12);
  *--VAR_10 = '/';
  VAR_9 = VAR_10;
  VAR_3 = VAR_3->parent;
 }
 VAR_6 -= 4;
 if (VAR_6 < 0)
  goto out_free;
 VAR_10 -= 4;
 FUNC_2(VAR_10, "/sys", 4);
 VAR_9 = VAR_10;
 VAR_7 = FUNC_3("proc", VAR_9, VAR_4, VAR_5);
out_free:
 FUNC_1((unsigned long)VAR_8);
out:
 return VAR_7;
}
