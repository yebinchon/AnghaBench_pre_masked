
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tomoyo_io_buffer {int read_eof; } ;
struct TYPE_4__ {TYPE_1__* domainname; } ;
struct TYPE_3__ {int name; } ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (struct tomoyo_io_buffer*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct tomoyo_io_buffer *VAR_0)
{
 if (!VAR_0->read_eof) {





  FUNC_1(VAR_0, "%s", FUNC_0()->domainname->name);
  VAR_0->read_eof = 1;
 }
 return 0;
}
