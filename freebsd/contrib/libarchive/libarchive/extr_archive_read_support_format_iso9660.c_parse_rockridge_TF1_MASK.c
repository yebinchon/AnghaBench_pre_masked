
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int birthtime_is_set; void* ctime; void* atime; void* mtime; void* birthtime; } ;


 void* FUNC_0 (unsigned char const*) ;
 void* FUNC_1 (unsigned char const*) ;

__attribute__((used)) static void
FUNC_2(struct file_info *VAR_0, const unsigned char *VAR_1,
    int VAR_2)
{
 char VAR_3;
 if (VAR_2 < 1)
  return;
 VAR_3 = VAR_1[0];
 ++VAR_1;
 --VAR_2;
 if (VAR_3 & 0x80) {

  if ((VAR_3 & 1) && VAR_2 >= 17) {

   VAR_0->birthtime_is_set = 1;
   VAR_0->birthtime = FUNC_0(VAR_1);
   VAR_1 += 17;
   VAR_2 -= 17;
  }
  if ((VAR_3 & 2) && VAR_2 >= 17) {

   VAR_0->mtime = FUNC_0(VAR_1);
   VAR_1 += 17;
   VAR_2 -= 17;
  }
  if ((VAR_3 & 4) && VAR_2 >= 17) {

   VAR_0->atime = FUNC_0(VAR_1);
   VAR_1 += 17;
   VAR_2 -= 17;
  }
  if ((VAR_3 & 8) && VAR_2 >= 17) {

   VAR_0->ctime = FUNC_0(VAR_1);
  }
 } else {

  if ((VAR_3 & 1) && VAR_2 >= 7) {

   VAR_0->birthtime_is_set = 1;
   VAR_0->birthtime = FUNC_1(VAR_1);
   VAR_1 += 7;
   VAR_2 -= 7;
  }
  if ((VAR_3 & 2) && VAR_2 >= 7) {

   VAR_0->mtime = FUNC_1(VAR_1);
   VAR_1 += 7;
   VAR_2 -= 7;
  }
  if ((VAR_3 & 4) && VAR_2 >= 7) {

   VAR_0->atime = FUNC_1(VAR_1);
   VAR_1 += 7;
   VAR_2 -= 7;
  }
  if ((VAR_3 & 8) && VAR_2 >= 7) {

   VAR_0->ctime = FUNC_1(VAR_1);
  }
 }
}
