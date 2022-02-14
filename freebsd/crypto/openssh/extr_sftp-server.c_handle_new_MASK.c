
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int next_unused; int use; int fd; int flags; scalar_t__ bytes_write; scalar_t__ bytes_read; int name; int * dirp; } ;
typedef int Handle ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, const char *VAR_4, int VAR_5, int VAR_6, DIR *VAR_7)
{
 int VAR_8;

 if (VAR_0 == -1) {
  if (VAR_2 + 1 <= VAR_2)
   return -1;
  VAR_2++;
  VAR_1 = FUNC_1(VAR_1, VAR_2, sizeof(Handle));
  FUNC_0(VAR_2 - 1);
 }

 VAR_8 = VAR_0;
 VAR_0 = VAR_1[VAR_8].next_unused;

 VAR_1[VAR_8].use = VAR_3;
 VAR_1[VAR_8].dirp = VAR_7;
 VAR_1[VAR_8].fd = VAR_5;
 VAR_1[VAR_8].flags = VAR_6;
 VAR_1[VAR_8].name = FUNC_2(VAR_4);
 VAR_1[VAR_8].bytes_read = VAR_1[VAR_8].bytes_write = 0;

 return VAR_8;
}
