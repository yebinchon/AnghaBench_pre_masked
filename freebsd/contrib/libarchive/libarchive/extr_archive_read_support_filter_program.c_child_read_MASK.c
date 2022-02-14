
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct program_filter {int child_stdin; int child_stdout; } ;
struct archive_read_filter {int upstream; struct program_filter* data; } ;
typedef int ssize_t ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int *,scalar_t__*,int *) ;
 size_t VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 char* FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct archive_read_filter*,struct program_filter*) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int,char const*,int) ;

__attribute__((used)) static ssize_t
FUNC_11(struct archive_read_filter *VAR_6, char *VAR_7, size_t VAR_8)
{
 struct program_filter *VAR_9 = VAR_6->data;
 ssize_t VAR_10, VAR_11, VAR_12;
 const char *VAR_13;




 VAR_11 = VAR_8 > VAR_4 ? VAR_4 : VAR_8;

 for (;;) {
  do {
   VAR_10 = FUNC_9(VAR_9->child_stdout, VAR_7, VAR_11);
  } while (VAR_10 == -1 && VAR_5 == VAR_1);

  if (VAR_10 > 0)
   return (VAR_10);
  if (VAR_10 == 0 || (VAR_10 == -1 && VAR_5 == VAR_2))


   return (FUNC_6(VAR_6, VAR_9));
  if (VAR_10 == -1 && VAR_5 != VAR_0)
   return (-1);

  if (VAR_9->child_stdin == -1) {

   FUNC_2(VAR_9->child_stdin,
       VAR_9->child_stdout);
   continue;
  }


  VAR_13 = FUNC_3(VAR_6->upstream, 1, &VAR_12);
  if (VAR_13 == ((void*)0)) {
   FUNC_7(VAR_9->child_stdin);
   VAR_9->child_stdin = -1;
   FUNC_8(VAR_9->child_stdout, VAR_3, 0);
   if (VAR_12 < 0)
    return (VAR_12);
   continue;
  }

  do {
   VAR_10 = FUNC_10(VAR_9->child_stdin, VAR_13, VAR_12);
  } while (VAR_10 == -1 && VAR_5 == VAR_1);

  if (VAR_10 > 0) {

   FUNC_4(VAR_6->upstream, VAR_10);
  } else if (VAR_10 == -1 && VAR_5 == VAR_0) {

   FUNC_2(VAR_9->child_stdin,
       VAR_9->child_stdout);
  } else {

   FUNC_7(VAR_9->child_stdin);
   VAR_9->child_stdin = -1;
   FUNC_8(VAR_9->child_stdout, VAR_3, 0);



   if (VAR_10 == -1 && VAR_5 != VAR_2)
    return (-1);
  }
 }
}
