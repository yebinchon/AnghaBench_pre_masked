
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;


 int FUNC_0 (struct archive_read*) ;

__attribute__((used)) static int FUNC_1(struct archive_read* VAR_0, int VAR_1) {
 int VAR_2;

 if(VAR_1 > 30)
  return -1;

 VAR_2 = FUNC_0(VAR_0);
 if(VAR_2 > -1) {
  return VAR_2;
 }

 return -1;
}
