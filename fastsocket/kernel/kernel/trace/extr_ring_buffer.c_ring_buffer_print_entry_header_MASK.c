
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct trace_seq*,char*,...) ;

int FUNC_1(struct trace_seq *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, "# compressed entry header\n");
 VAR_4 = FUNC_0(VAR_3, "\ttype_len    :    5 bits\n");
 VAR_4 = FUNC_0(VAR_3, "\ttime_delta  :   27 bits\n");
 VAR_4 = FUNC_0(VAR_3, "\tarray       :   32 bits\n");
 VAR_4 = FUNC_0(VAR_3, "\n");
 VAR_4 = FUNC_0(VAR_3, "\tpadding     : type == %d\n",
          VAR_1);
 VAR_4 = FUNC_0(VAR_3, "\ttime_extend : type == %d\n",
          VAR_2);
 VAR_4 = FUNC_0(VAR_3, "\tdata max type_len  == %d\n",
          VAR_0);

 return VAR_4;
}
