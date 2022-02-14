
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t _maximum; scalar_t__ _variable; scalar_t__* _wireformat; } ;
typedef TYPE_1__ sldns_rr_descriptor ;
typedef scalar_t__ sldns_rdf_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

sldns_rdf_type
FUNC_1(const sldns_rr_descriptor *VAR_1,
                              size_t VAR_2)
{
 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 < VAR_1->_maximum
        || VAR_1->_variable != VAR_0);
 if (VAR_2 < VAR_1->_maximum) {
  return VAR_1->_wireformat[VAR_2];
 } else {
  return VAR_1->_variable;
 }
}
