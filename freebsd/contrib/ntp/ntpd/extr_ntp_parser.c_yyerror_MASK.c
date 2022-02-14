
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ncol; int nline; } ;
struct FILE_INFO {TYPE_1__ errpos; TYPE_1__ tokpos; } ;
struct TYPE_4__ {int no_errors; scalar_t__ err_pos; scalar_t__ err_msg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct FILE_INFO* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ,int,char const*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (scalar_t__,scalar_t__,char*,int,char const*) ;

void
FUNC_4(
 const char *VAR_3
 )
{
 int VAR_4;
 struct FILE_INFO * VAR_5;

 VAR_5 = FUNC_0();
 VAR_5->errpos = VAR_5->tokpos;

 FUNC_2(VAR_0, "line %d column %d %s",
  VAR_5->errpos.nline, VAR_5->errpos.ncol, VAR_3);
 if (!FUNC_1()) {

  VAR_4 = FUNC_3(VAR_2.err_msg + VAR_2.err_pos,
      VAR_1 - VAR_2.err_pos,
      "column %d %s",
      VAR_5->errpos.ncol, VAR_3);


  if (VAR_4 > 0)
   VAR_2.err_pos += VAR_4;


  ++VAR_2.no_errors;
 }
}
