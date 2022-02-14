
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ns_sect ;
struct TYPE_6__ {int type; int rr_class; int rdlength; int * rdata; scalar_t__ ttl; int nnamel; int nname; } ;
typedef TYPE_1__ ns_rr2 ;
struct TYPE_7__ {int _sect; int _rrnum; int* _counts; int _msg_ptr; int _eom; int _msg; } ;
typedef TYPE_2__ ns_msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (TYPE_2__*,int) ;

int
FUNC_6(ns_msg *VAR_7, ns_sect VAR_8, int VAR_9, ns_rr2 *VAR_10) {
 int VAR_11;
 int VAR_12;


 if ((VAR_12 = VAR_8) < 0 || VAR_8 >= VAR_5)
  FUNC_2(VAR_1);
 if (VAR_8 != VAR_7->_sect)
  FUNC_5(VAR_7, VAR_8);


 if (VAR_9 == -1)
  VAR_9 = VAR_7->_rrnum;
 if (VAR_9 < 0 || VAR_9 >= VAR_7->_counts[(int)VAR_8])
  FUNC_2(VAR_1);
 if (VAR_9 < VAR_7->_rrnum)
  FUNC_5(VAR_7, VAR_8);
 if (VAR_9 > VAR_7->_rrnum) {
  VAR_11 = FUNC_4(VAR_7->_msg_ptr, VAR_7->_eom, VAR_8,
         VAR_9 - VAR_7->_rrnum);

  if (VAR_11 < 0)
   return (-1);
  VAR_7->_msg_ptr += VAR_11;
  VAR_7->_rrnum = VAR_9;
 }


 VAR_11 = FUNC_3(VAR_7->_msg, VAR_7->_eom, VAR_7->_msg_ptr,
       VAR_10->nname, VAR_4, &VAR_10->nnamel);
 if (VAR_11 < 0)
  return (-1);
 VAR_7->_msg_ptr += VAR_11;
 if (VAR_7->_msg_ptr + VAR_2 + VAR_2 > VAR_7->_eom)
  FUNC_2(VAR_0);
 FUNC_0(VAR_10->type, VAR_7->_msg_ptr);
 FUNC_0(VAR_10->rr_class, VAR_7->_msg_ptr);
 if (VAR_8 == VAR_6) {
  VAR_10->ttl = 0;
  VAR_10->rdlength = 0;
  VAR_10->rdata = ((void*)0);
 } else {
  if (VAR_7->_msg_ptr + VAR_3 + VAR_2 > VAR_7->_eom)
   FUNC_2(VAR_0);
  FUNC_1(VAR_10->ttl, VAR_7->_msg_ptr);
  FUNC_0(VAR_10->rdlength, VAR_7->_msg_ptr);
  if (VAR_7->_msg_ptr + VAR_10->rdlength > VAR_7->_eom)
   FUNC_2(VAR_0);
  VAR_10->rdata = &VAR_7->_msg_ptr;
  VAR_7->_msg_ptr += VAR_10->rdlength;
 }
 if (++VAR_7->_rrnum > VAR_7->_counts[(int)VAR_8])
  FUNC_5(VAR_7, (ns_sect)((int)VAR_8 + 1));


 return (0);
}
