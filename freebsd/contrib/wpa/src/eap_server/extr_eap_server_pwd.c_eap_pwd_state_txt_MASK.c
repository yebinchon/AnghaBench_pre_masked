
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char * FUNC_0(int VAR_0)
{
 switch (VAR_0) {
        case 129:
  return "PWD-ID-Req";
        case 131:
  return "PWD-Commit-Req";
        case 130:
  return "PWD-Confirm-Req";
        case 128:
  return "SUCCESS";
        case 132:
  return "FAILURE";
        default:
  return "PWD-Unk";
 }
}
