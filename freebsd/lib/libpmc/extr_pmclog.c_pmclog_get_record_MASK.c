
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pmclog_parse_state {int ps_state; int ps_svcount; int ps_saved; } ;
typedef int ssize_t ;
typedef enum pmclog_parser_state { ____Placeholder_pmclog_parser_state } pmclog_parser_state ;


 void* VAR_0 ;



 int FUNC_0 (struct pmclog_parse_state*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static enum pmclog_parser_state
FUNC_3(struct pmclog_parse_state *VAR_1, char **VAR_2, ssize_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8;
 const int VAR_9 = sizeof(uint32_t);
 char *VAR_10, *VAR_11;

 if ((VAR_4 = *VAR_3) <= 0)
  return (VAR_1->ps_state = VAR_0);

 VAR_10 = *VAR_2;
 VAR_7 = 0;

 if (VAR_1->ps_state == 129)
  VAR_1->ps_svcount = 0;

 VAR_11 = (char *) &VAR_1->ps_saved + VAR_1->ps_svcount;

 switch (VAR_1->ps_state) {
 case 129:
  VAR_5 = VAR_4 < VAR_9 ? VAR_4 : VAR_9;
  FUNC_2(VAR_10, VAR_11, VAR_5);
  VAR_1->ps_svcount = VAR_7 = VAR_5;

  if (VAR_5 < VAR_9) {
   VAR_1->ps_state = 130;
   goto done;
  }

  VAR_10 += VAR_5;
  VAR_11 += VAR_5;

  VAR_8 = FUNC_0(VAR_1);
  VAR_6 = FUNC_1(VAR_8);

  if (VAR_6 <= 0)
   goto error;

  if (VAR_6 <= VAR_4) {
   FUNC_2(VAR_10, VAR_11, VAR_6 - VAR_5);
   VAR_1->ps_svcount = VAR_7 = VAR_6;
   goto done;
  }


  FUNC_2(VAR_10, VAR_11, VAR_4 - VAR_5);
  VAR_1->ps_svcount = VAR_7 = VAR_4;
  VAR_1->ps_state = 128;

  break;

 case 130:
  if (VAR_4 + VAR_1->ps_svcount < VAR_9) {
   FUNC_2(VAR_10, VAR_11, VAR_4);
   VAR_1->ps_svcount += VAR_4;
   VAR_7 = VAR_4;
   break;
  }

  VAR_7 = VAR_5 = VAR_9 - VAR_1->ps_svcount;
  FUNC_2(VAR_10, VAR_11, VAR_5);
  VAR_10 += VAR_5;
  VAR_11 += VAR_5;
  VAR_4 -= VAR_5;
  VAR_1->ps_svcount += VAR_5;



 case 128:
  VAR_8 = FUNC_0(VAR_1);
  VAR_6 = FUNC_1(VAR_8);

  if (VAR_6 <= 0)
   goto error;

  if (VAR_4 + VAR_1->ps_svcount < VAR_6) {
   VAR_5 = VAR_4;
   VAR_1->ps_state = 128;
  } else {
   VAR_5 = VAR_6 - VAR_1->ps_svcount;
   VAR_1->ps_state = 129;
  }

  FUNC_2(VAR_10, VAR_11, VAR_5);
  VAR_1->ps_svcount += VAR_5;
  VAR_7 += VAR_5;
  break;

 default:
  goto error;
 }

 done:
 *VAR_2 += VAR_7;
 *VAR_3 -= VAR_7;
 return VAR_1->ps_state;

 error:
 VAR_1->ps_state = VAR_0;
 return VAR_1->ps_state;
}
