
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {unsigned int magic; unsigned int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 char* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct archive*,int,char*,char const*,char const*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,unsigned int) ;

int
FUNC_5(struct archive *VAR_3, unsigned int VAR_4,
    unsigned int VAR_5, const char *VAR_6)
{
 char VAR_7[64];
 char VAR_8[64];
 const char *VAR_9;






 VAR_9 = FUNC_0(VAR_3->magic);

 if (!VAR_9) {
  FUNC_3("PROGRAMMER ERROR: Function ");
  FUNC_3(VAR_6);
  FUNC_3(" invoked with invalid archive handle.\n");
  FUNC_2();
 }

 if (VAR_3->magic != VAR_4) {
  FUNC_1(VAR_3, -1,
      "PROGRAMMER ERROR: Function '%s' invoked"
      " on '%s' archive object, which is not supported.",
      VAR_6,
      VAR_9);
  VAR_3->state = VAR_2;
  return (VAR_0);
 }

 if ((VAR_3->state & VAR_5) == 0) {

  if (VAR_3->state != VAR_2)
   FUNC_1(VAR_3, -1,
       "INTERNAL ERROR: Function '%s' invoked with"
       " archive structure in state '%s',"
       " should be in state '%s'",
       VAR_6,
       FUNC_4(VAR_7, VAR_3->state),
       FUNC_4(VAR_8, VAR_5));
  VAR_3->state = VAR_2;
  return (VAR_0);
 }
 return VAR_1;
}
