
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_wstat {int dummy; } ;
struct p9_fcall {int size; int capacity; char* sdata; scalar_t__ offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,struct p9_fcall*) ;
 int FUNC_2 (struct p9_fcall*,int,char*,struct p9_wstat*) ;

int FUNC_3(char *VAR_1, int VAR_2, struct p9_wstat *VAR_3, int VAR_4)
{
 struct p9_fcall VAR_5;
 int VAR_6;

 VAR_5.size = VAR_2;
 VAR_5.capacity = VAR_2;
 VAR_5.sdata = VAR_1;
 VAR_5.offset = 0;

 VAR_6 = FUNC_2(&VAR_5, VAR_4, "S", VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_0, "<<< p9stat_read failed: %d\n", VAR_6);
  FUNC_1(1, &VAR_5);
 }

 return VAR_6;
}
