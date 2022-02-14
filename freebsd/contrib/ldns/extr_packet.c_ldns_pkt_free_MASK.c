
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int _answerfrom; int _edns_data; int _tsig_rr; int _additional; int _authority; int _answer; int _question; struct TYPE_4__* _header; } ;
typedef TYPE_1__ ldns_pkt ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(ldns_pkt *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->_header);
  FUNC_3(VAR_0->_question);
  FUNC_3(VAR_0->_answer);
  FUNC_3(VAR_0->_authority);
  FUNC_3(VAR_0->_additional);
  FUNC_2(VAR_0->_tsig_rr);
  FUNC_1(VAR_0->_edns_data);
  FUNC_1(VAR_0->_answerfrom);
  FUNC_0(VAR_0);
 }
}
