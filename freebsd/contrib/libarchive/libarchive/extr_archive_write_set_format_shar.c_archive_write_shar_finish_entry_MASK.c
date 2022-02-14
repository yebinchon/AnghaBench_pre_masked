
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; int s; } ;
struct shar {scalar_t__ outpos; TYPE_1__ work; int * entry; int end_of_line; scalar_t__ has_data; int outbuff; scalar_t__ dump; } ;
struct archive_write {scalar_t__ format_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_write*,int ,int) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char const* FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,char) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*,...) ;
 int FUNC_11 (TYPE_1__*,char const*,int) ;
 int FUNC_12 (struct archive_write*,struct shar*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_13(struct archive_write *VAR_2)
{
 const char *VAR_3, *VAR_4, *VAR_5;
 struct shar *VAR_6;
 int VAR_7;

 VAR_6 = (struct shar *)VAR_2->format_data;
 if (VAR_6->entry == ((void*)0))
  return (0);

 if (VAR_6->dump) {

  if (VAR_6->has_data) {
   if (VAR_6->outpos > 0)
    FUNC_12(VAR_2, VAR_6, VAR_6->outbuff,
        VAR_6->outpos);
   FUNC_8(&VAR_6->work, "`\nend\n");
   FUNC_8(&VAR_6->work, "SHAR_END\n");
  }





  FUNC_10(&VAR_6->work, "chmod %o ",
      (unsigned int)(FUNC_4(VAR_6->entry) & 07777));
  FUNC_11(&VAR_6->work, FUNC_5(VAR_6->entry), 1);
  FUNC_8(&VAR_6->work, "\n");

  VAR_5 = FUNC_6(VAR_6->entry);
  VAR_3 = FUNC_3(VAR_6->entry);
  if (VAR_5 != ((void*)0) || VAR_3 != ((void*)0)) {
   FUNC_8(&VAR_6->work, "chown ");
   if (VAR_5 != ((void*)0))
    FUNC_11(&VAR_6->work, VAR_5, 1);
   if (VAR_3 != ((void*)0)) {
    FUNC_8(&VAR_6->work, ":");
    FUNC_11(&VAR_6->work, VAR_3, 1);
   }
   FUNC_8(&VAR_6->work, " ");
   FUNC_11(&VAR_6->work,
       FUNC_5(VAR_6->entry), 1);
   FUNC_8(&VAR_6->work, "\n");
  }

  if ((VAR_4 = FUNC_1(VAR_6->entry)) != ((void*)0)) {
   FUNC_10(&VAR_6->work, "chflags %s ", VAR_4);
   FUNC_11(&VAR_6->work,
       FUNC_5(VAR_6->entry), 1);
   FUNC_8(&VAR_6->work, "\n");
  }



 } else {
  if (VAR_6->has_data) {

   if (!VAR_6->end_of_line)
    FUNC_7(&VAR_6->work, '\n');
   FUNC_8(&VAR_6->work, "SHAR_END\n");
  }
 }

 FUNC_2(VAR_6->entry);
 VAR_6->entry = ((void*)0);

 if (VAR_6->work.length < 65536)
  return (VAR_1);

 VAR_7 = FUNC_0(VAR_2, VAR_6->work.s, VAR_6->work.length);
 if (VAR_7 != VAR_1)
  return (VAR_0);
 FUNC_9(&VAR_6->work);

 return (VAR_1);
}
