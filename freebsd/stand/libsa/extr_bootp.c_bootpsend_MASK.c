
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct iodesc {int dummy; } ;
struct bootp {int bp_secs; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct iodesc*,void*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_4(struct iodesc *VAR_2, void *VAR_3, size_t VAR_4)
{
 struct bootp *VAR_5;






 VAR_5 = VAR_3;
 VAR_5->bp_secs = FUNC_1((u_short)(FUNC_0() - VAR_0));






 return (FUNC_3(VAR_2, VAR_3, VAR_4));
}
