
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct buffer *VAR_2, struct module *VAR_3)
{
 FUNC_0(VAR_2, "\n");
 FUNC_0(VAR_2, "static const struct rheldata _rheldata __used\n");
 FUNC_0(VAR_2, "__attribute__((section(\".rheldata\"))) = {\n");
 FUNC_0(VAR_2, "	.rhel_major = %d,\n", VAR_0);
 FUNC_0(VAR_2, "	.rhel_minor = %d,\n", VAR_1);
 FUNC_0(VAR_2, "};\n");
}
