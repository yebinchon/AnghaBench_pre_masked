
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_addr_info {int dummy; } ;
struct safe_symbol_file_add_args {char* name; int from_tty; int mainline; int flags; struct objfile* ret; struct section_addr_info* addrs; void* out; void* err; } ;
struct objfile {int dummy; } ;
struct cleanup {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct safe_symbol_file_add_args*,char*,int ) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (void*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 struct cleanup* FUNC_3 (int ,struct safe_symbol_file_add_args*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_4 () ;

__attribute__((used)) static struct objfile *
FUNC_5 (char *VAR_5, int VAR_6,
        struct section_addr_info *VAR_7,
        int VAR_8, int VAR_9)
{
  struct safe_symbol_file_add_args VAR_10;
  struct cleanup *VAR_11;

  VAR_11 = FUNC_3 (VAR_3, &VAR_10);

  VAR_10.err = VAR_1;
  VAR_10.out = VAR_2;
  FUNC_2 (VAR_1);
  FUNC_2 (VAR_2);
  VAR_1 = FUNC_4 ();
  VAR_2 = FUNC_4 ();
  VAR_10.name = VAR_5;
  VAR_10.from_tty = VAR_6;
  VAR_10.addrs = VAR_7;
  VAR_10.mainline = VAR_8;
  VAR_10.flags = VAR_9;
  FUNC_0 (VAR_4, &VAR_10, "", VAR_0);

  FUNC_1 (VAR_11);
  return VAR_10.ret;
}
