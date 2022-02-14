
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapsink_dep {scalar_t__ rb_status; char* rb_comm; int set; int status; char* comm; int rb; int rb_version; int version; } ;
struct trapsink {scalar_t__ status; char* comm; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int
FUNC_1(struct trapsink *VAR_8, struct trapsink_dep *VAR_9)
{
 VAR_9->rb_status = VAR_8->status;
 VAR_9->rb_version = VAR_8->version;
 FUNC_0(VAR_9->rb_comm, VAR_8->comm);

 if (VAR_9->set & VAR_4) {


  if (VAR_9->status == 2 && VAR_9->rb_status == VAR_6) {
   VAR_8->status = VAR_7;
   VAR_9->rb |= VAR_3;
  }
 }

 if (VAR_9->set & VAR_5)
  VAR_8->version = VAR_9->version;
 if (VAR_9->set & VAR_2)
  FUNC_0(VAR_8->comm, VAR_9->comm);

 if (VAR_9->set & VAR_4) {

  if (VAR_9->status == 1 && VAR_9->rb_status != VAR_6) {
   if (VAR_8->comm[0] == '\0') {
    VAR_8->status = VAR_9->rb_status;
    VAR_8->version = VAR_9->rb_version;
    FUNC_0(VAR_8->comm, VAR_9->rb_comm);
    return (VAR_0);
   }
   VAR_8->status = VAR_6;
   VAR_9->rb |= VAR_3;
  }
 }
 return (VAR_1);
}
