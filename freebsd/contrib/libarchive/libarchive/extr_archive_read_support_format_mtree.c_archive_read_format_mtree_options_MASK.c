
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtree {int checkfs; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_2,
    const char *VAR_3, const char *VAR_4)
{
 struct mtree *VAR_5;

 VAR_5 = (struct mtree *)(VAR_2->format->data);
 if (FUNC_0(VAR_3, "checkfs") == 0) {

  if (VAR_4 == ((void*)0) || VAR_4[0] == 0) {
   VAR_5->checkfs = 0;
  } else {
   VAR_5->checkfs = 1;
  }
  return (VAR_0);
 }




 return (VAR_1);
}
