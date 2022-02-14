
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapsink_dep {int set; int rb_comm; int rb_version; int rb_status; } ;
struct trapsink {int comm; int version; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct trapsink *VAR_4, struct trapsink_dep *VAR_5)
{
 if (VAR_5->set & VAR_2)
  VAR_4->status = VAR_5->rb_status;
 if (VAR_5->set & VAR_3)
  VAR_4->version = VAR_5->rb_version;
 if (VAR_5->set & VAR_1)
  FUNC_0(VAR_4->comm, VAR_5->rb_comm);

 return (VAR_0);
}
