
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cab {int * sconv; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 int * FUNC_1 (int *,char const*,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(struct archive_read *VAR_5,
    const char *VAR_6, const char *VAR_7)
{
 struct cab *VAR_8;
 int VAR_9 = VAR_1;

 VAR_8 = (struct cab *)(VAR_5->format->data);
 if (FUNC_2(VAR_6, "hdrcharset") == 0) {
  if (VAR_7 == ((void*)0) || VAR_7[0] == 0)
   FUNC_0(&VAR_5->archive, VAR_0,
       "cab: hdrcharset option needs a character-set name");
  else {
   VAR_8->sconv = FUNC_1(
       &VAR_5->archive, VAR_7, 0);
   if (VAR_8->sconv != ((void*)0))
    VAR_9 = VAR_3;
   else
    VAR_9 = VAR_2;
  }
  return (VAR_9);
 }




 return (VAR_4);
}
