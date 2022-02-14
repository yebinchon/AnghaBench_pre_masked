
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_cluster {unsigned int cl_keepalive_delay_ms; unsigned int cl_idle_timeout_ms; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char const*,size_t,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_3(
 struct o2nm_cluster *VAR_2, const char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_4, &VAR_6);

 if (VAR_5 > 0) {
  if (VAR_2->cl_keepalive_delay_ms != VAR_6
      && FUNC_1()) {
   FUNC_0(VAR_1,
        "o2net: cannot change keepalive delay after"
        " the first peer has agreed to it."
        "  %d connected peers\n",
        FUNC_1());
   VAR_5 = -VAR_0;
  } else if (VAR_6 >= VAR_2->cl_idle_timeout_ms) {
   FUNC_0(VAR_1, "o2net: keepalive delay must be "
        "smaller than idle timeout\n");
   VAR_5 = -VAR_0;
  } else {
   VAR_2->cl_keepalive_delay_ms = VAR_6;
  }
 }

 return VAR_5;
}
